/* Copyright 2023 Dual Tachyon
 * https://github.com/DualTachyon
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *     Unless required by applicable law or agreed to in writing, software
 *     distributed under the License is distributed on an "AS IS" BASIS,
 *     WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *     See the License for the specific language governing permissions and
 *     limitations under the License.
 */

#ifndef UI_FONT_H
#define UI_FONT_H

#include <stdbool.h>
#include <stdint.h>

void FONT_Draw(uint8_t X, uint8_t Y, const uint32_t *pOffsets, uint32_t Count);
uint8_t FONT_GetOffsets(const char *String, uint8_t Size, bool bFlag);

#endif

