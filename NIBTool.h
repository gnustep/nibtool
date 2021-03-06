/*
   Project: nibtool

   Copyright (C) 2010 Free Software Foundation

   Author: heron,,,

   Created: 2010-06-02 19:44:20 -0400 by heron

   This application is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.

   This application is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111 USA.
*/

#ifndef _NIBTOOL_H_
#define _NIBTOOL_H_

#import <Foundation/Foundation.h>

@interface NIBTool : NSObject
{

}
- (id) initWithArguments: (const char **)argv count: (int)argc;
- (void) run;
@end

#endif // _NIBTOOL_H_

