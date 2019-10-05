﻿/*
 * message.h -- Display global messages as feedback in response to user
 * operations.
 *
 * Copyright (c) 2019, Liu chao <lc-soft@live.cn> All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *   * Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *   * Neither the name of LCUI nor the names of its contributors may be used
 *     to endorse or promote products derived from this software without
 *     specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef LCDESIGN_MESSAGE_H
#define LCDESIGN_MESSAGE_H

typedef struct LCDesign_MessageConfigRec_ {
	/** Customized Icon */
	LCUI_Widget icon;

	/** content of the message */
	const wchar_t *content;

	/** time(milliseconds) before auto-dismiss, don't dismiss if set to 0 */
	long duration;
} LCDesign_MessageConfigRec, *LCDesign_MessageConfig;

LCUI_API void LCDesign_SetMessageContainer(LCUI_Widget w);

LCUI_API LCUI_Widget LCDesign_OpenMessage(LCDesign_MessageConfig config);

LCUI_API void LCDesign_CloseMessage(LCUI_Widget message);

LCUI_API LCUI_Widget LCDesign_OpenSuccessMessage(const wchar_t *content,
						 long duration);

LCUI_API LCUI_Widget LCDesign_OpenInfoMessage(const wchar_t *content,
					      long duration);

LCUI_API LCUI_Widget LCDesign_OpenWarningMessage(const wchar_t *content,
						 long duration);

LCUI_API LCUI_Widget LCDesign_OpenErrorMessage(const wchar_t *content,
					       long duration);

LCUI_API LCUI_Widget LCDesign_OpenLoadingMessage(const wchar_t *content,
						 long duration);

LCUI_API void LCDesign_InitMessage(void);

#endif
