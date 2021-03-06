/*
 * decoder_mp3.h - A MP3 Decoder based on mad
 *
 * Copyright (c) 2013   A. Dilly
 *
 * AirCat is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation.
 *
 * AirCat is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with AirCat.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _DECODER_MP3_H
#define _DECODER_MP3_H

#include "decoder.h"

struct decoder;

int decoder_mp3_open(struct decoder **dec, void *input_callback, void *user_data);
unsigned long decoder_mp3_get_samplerate(struct decoder *dec);
unsigned char decoder_mp3_get_channels(struct decoder *dec);
int decoder_mp3_read(struct decoder *dec, unsigned char *buffer, size_t size);
int decoder_mp3_close(struct decoder *dec);

#endif

