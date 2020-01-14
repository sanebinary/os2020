# **Nguyen Duc Anh (BI9-041)**

## **Practical Work 1**

**1.**  echo hello world


```shell
hello world
```
**2.**  passwd


```shell
Changing password for dan09.
Current password:
```

**3.** date


```shell
Tue 14 Jan 2020 09:18:51 AM +07
```

**4.** hostname

```shell
debian
```

**5.** arch

```shell
x86_64
```

**6.** uname -a
```shell
Linux debian 4.19.0-6-amd64 #1 SMP Debian 4.19.67-2+deb10u2 (2019-11-11) x86_64 GNU/Linux
```

**7.** sudo dmesg | awk 'FNR<=10'
```shell
[    0.000000] microcode: microcode updated early to revision 0x2e, date = 2019-06-13
[    0.000000] Linux version 4.19.0-6-amd64 (debian-kernel@lists.debian.org) (gcc version 8.3.0 (Debian 8.3.0-6)) #1 SMP Debian 4.19.67-2+deb10u2 (2019-11-11)
[    0.000000] Command line: BOOT_IMAGE=/boot/vmlinuz-4.19.0-6-amd64 root=UUID=ab5efb47-976b-4284-b034-45444f747a57 ro quiet
[    0.000000] x86/fpu: Supporting XSAVE feature 0x001: 'x87 floating point registers'
[    0.000000] x86/fpu: Supporting XSAVE feature 0x002: 'SSE registers'
[    0.000000] x86/fpu: Supporting XSAVE feature 0x004: 'AVX registers'
[    0.000000] x86/fpu: xstate_offset[2]:  576, xstate_sizes[2]:  256
[    0.000000] x86/fpu: Enabled xstate features 0x7, context size is 832 bytes, using 'standard' format.
[    0.000000] BIOS-provided physical RAM map:
[    0.000000] BIOS-e820: [mem 0x0000000000000000-0x0000000000057fff] usable
```

**8.** uptime

```shell
09:24:02 up 40 min,  1 user,  load average: 1.24, 1.09, 1.02
```

**9.** who am i

*No output.*

**10.** whoami

```shell
dan09
```

**11.**  who

```shell
dan09    tty7         2020-01-14 08:45 (:0)
```

**12.** id

```shell
uid=1000(dan09) gid=1000(dan09) groups=1000(dan09),24(cdrom),25(floppy),29(audio),30(dip),44(video),46(plugdev),100(users),108(netdev),114(bluetooth),115(lpadmin),119(scanner),120(wireshark),1002(docker)
```

**13.** last | awk "FNR<=10"

```shell
dan09    tty7         :0               Tue Jan 14 08:45   still logged in
reboot   system boot  4.19.0-6-amd64   Tue Jan 14 15:45   still running
dan09    tty7         :0               Mon Jan 13 13:30 - 16:36  (03:05)
reboot   system boot  4.19.0-6-amd64   Mon Jan 13 20:30 - 16:36  (-3:54)
dan09    tty7         :0               Fri Jan 10 13:50 - crash (3+06:39)
reboot   system boot  4.19.0-6-amd64   Fri Jan 10 20:50 - 16:36 (2+19:45)
dan09    tty7         :0               Wed Jan  8 08:52 - crash (2+11:57)
reboot   system boot  4.19.0-6-amd64   Wed Jan  8 15:51 - 16:36 (5+00:45)
dan09    tty7         :0               Fri Jan  3 13:02 - 13:05  (00:02)
reboot   system boot  4.19.0-6-amd64   Fri Jan  3 20:02 - 13:05  (-6:57)
```

**14.** finger

```shell
Login     Name       Tty      Idle  Login Time   Office     Office Phone
dan09     dan09      tty7       48  Jan 14 08:45 (:0)
```

**15.** w

```shell
09:32:27 up 48 min,  1 user,  load average: 1.04, 1.02, 1.02
USER     TTY      FROM             LOGIN@   IDLE   JCPU   PCPU WHAT
dan09    tty7     :0               08:45   47:20   1:19   1.67s i3
```