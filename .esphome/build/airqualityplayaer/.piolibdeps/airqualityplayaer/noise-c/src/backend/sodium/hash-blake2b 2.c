/*
 * Copyright (C) 2016 Southern Storm Software, Pty Ltd.
 * Copyright (C) 2016 Topology LP.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include "noise/defines.h"
#if NOISE_USE_LIBSODIUM && NOISE_USE_BLAKE2B

#include "protocol/internal.h"
#include <sodium.h>

typedef struct
{
    struct NoiseHashState_s parent;
    crypto_generichash_blake2b_state blake2;

} NoiseBLAKE2bState;

static void noise_blake2b_reset(NoiseHashState *state)
{
    NoiseBLAKE2bState *st = (NoiseBLAKE2bState *)state;
    crypto_generichash_blake2b_init(&(st->blake2), NULL, 0, crypto_generichash_blake2b_BYTES_MAX);
}

static void noise_blake2b_update(NoiseHashState *state, const uint8_t *data, size_t len)
{
    NoiseBLAKE2bState *st = (NoiseBLAKE2bState *)state;
    crypto_generichash_blake2b_update(&(st->blake2), data, len);
}

static void noise_blake2b_finalize(NoiseHashState *state, uint8_t *hash)
{
    NoiseBLAKE2bState *st = (NoiseBLAKE2bState *)state;
    crypto_generichash_blake2b_final(&(st->blake2), hash, crypto_generichash_blake2b_BYTES_MAX);
}

NoiseHashState *noise_blake2b_new(void)
{
    NoiseBLAKE2bState *state = noise_new(NoiseBLAKE2bState);
    if (!state)
        return 0;
    state->parent.hash_id = NOISE_HASH_BLAKE2b;
    state->parent.hash_len = 64;
    state->parent.block_len = 128;
    state->parent.reset = noise_blake2b_reset;
    state->parent.update = noise_blake2b_update;
    state->parent.finalize = noise_blake2b_finalize;
    return &(state->parent);
}

#endif  // NOISE_USE_LIBSODIUM
