/* pause system call for Linux/Xtensa.
   Copyright (C) 1996, 1997, 2005, 2007 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */

#include <signal.h>
#include <unistd.h>
#include <sys/syscall.h>

int
__syscall_pause(void)
{
  sigset_t set;
  int rc = INLINE_SYSCALL (rt_sigprocmask, 4, SIG_BLOCK, NULL, &set, _NSIG / 8);
  if (rc == 0)
    rc = INLINE_SYSCALL (rt_sigsuspend, 2, &set, _NSIG / 8);

  return rc;
}

int
__pause_nocancel (void)
{
  return __syscall_pause ();
}

int
__libc_pause(void)
{
  return __syscall_pause ();
}
weak_alias (__libc_pause, pause)
