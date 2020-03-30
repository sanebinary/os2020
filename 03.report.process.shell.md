# **Nguyen Duc Anh (BI9-041)**

## **Practical Work 3**

**1.** List all your running processes (ps with more info from man)

```shell
ps aux
```

Output: 

```shell
USER       PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
root         1  0.0  0.1 169808  7084 ?        Ss   08:43   0:02 /sbin/init
root         2  0.0  0.0      0     0 ?        S    08:43   0:00 [kthreadd]
root         3  0.0  0.0      0     0 ?        I<   08:43   0:00 [rcu_gp]
root         4  0.0  0.0      0     0 ?        I<   08:43   0:00 [rcu_par_gp]
root         6  0.0  0.0      0     0 ?        I<   08:43   0:00 [kworker/0:0H-kblockd]
root         8  0.0  0.0      0     0 ?        I<   08:43   0:00 [mm_percpu_wq]
root         9  0.0  0.0      0     0 ?        S    08:43   0:00 [ksoftirqd/0]
root        10  0.1  0.0      0     0 ?        I    08:43   0:06 [rcu_sched]
root        11  0.0  0.0      0     0 ?        I    08:43   0:00 [rcu_bh]
root        12  0.0  0.0      0     0 ?        S    08:43   0:00 [migration/0]
root        14  0.0  0.0      0     0 ?        S    08:43   0:00 [cpuhp/0]
root        15  0.0  0.0      0     0 ?        S    08:43   0:00 [cpuhp/1]
root        16  0.0  0.0      0     0 ?        S    08:43   0:00 [migration/1]
root        17  0.0  0.0      0     0 ?        S    08:43   0:00 [ksoftirqd/1]
root        19  0.0  0.0      0     0 ?        I<   08:43   0:00 [kworker/1:0H-kblockd]
root        20  0.0  0.0      0     0 ?        S    08:43   0:00 [cpuhp/2]
root        21  0.0  0.0      0     0 ?        S    08:43   0:00 [migration/2]
root        22  0.0  0.0      0     0 ?        S    08:43   0:00 [ksoftirqd/2]
root        24  0.0  0.0      0     0 ?        I<   08:43   0:00 [kworker/2:0H-kblockd]
root        25  0.0  0.0      0     0 ?        S    08:43   0:00 [cpuhp/3]
root        26  0.0  0.0      0     0 ?        S    08:43   0:00 [migration/3]
root        27  0.0  0.0      0     0 ?        S    08:43   0:00 [ksoftirqd/3]
root        29  0.0  0.0      0     0 ?        I<   08:43   0:00 [kworker/3:0H-kblockd]
root        30  0.0  0.0      0     0 ?        S    08:43   0:00 [kdevtmpfs]
root        31  0.0  0.0      0     0 ?        I<   08:43   0:00 [netns]
root        32  0.0  0.0      0     0 ?        S    08:43   0:00 [kauditd]
root        33  0.0  0.0      0     0 ?        S    08:43   0:00 [khungtaskd]
root        34  0.0  0.0      0     0 ?        S    08:43   0:00 [oom_reaper]
root        35  0.0  0.0      0     0 ?        I<   08:43   0:00 [writeback]
root        36  0.0  0.0      0     0 ?        S    08:43   0:00 [kcompactd0]
root        37  0.0  0.0      0     0 ?        SN   08:43   0:00 [ksmd]
root        38  0.0  0.0      0     0 ?        SN   08:43   0:01 [khugepaged]
root        39  0.0  0.0      0     0 ?        I<   08:43   0:00 [crypto]
root        40  0.0  0.0      0     0 ?        I<   08:43   0:00 [kintegrityd]
root        41  0.0  0.0      0     0 ?        I<   08:43   0:00 [kblockd]
root        45  0.0  0.0      0     0 ?        I<   08:43   0:00 [edac-poller]
root        47  0.0  0.0      0     0 ?        I<   08:43   0:00 [devfreq_wq]
root        48  0.0  0.0      0     0 ?        S    08:43   0:00 [watchdogd]
root        51  0.0  0.0      0     0 ?        S    08:43   0:04 [kswapd0]
root        69  0.0  0.0      0     0 ?        I<   08:43   0:00 [kthrotld]
root        70  0.0  0.0      0     0 ?        S    08:43   0:00 [irq/42-pciehp]
root        71  0.0  0.0      0     0 ?        I<   08:43   0:00 [ipv6_addrconf]
root        80  0.0  0.0      0     0 ?        I<   08:43   0:00 [kstrp]
root       125  0.0  0.0      0     0 ?        I<   08:43   0:00 [acpi_thermal_pm]
root       126  0.1  0.0      0     0 ?        S    08:43   0:12 [irq/30-DLL0655:]
root       139  0.0  0.0      0     0 ?        I    08:43   0:01 [kworker/3:2-events]
root       142  0.0  0.0      0     0 ?        I<   08:43   0:00 [ata_sff]
root       158  0.0  0.0      0     0 ?        S    08:43   0:00 [scsi_eh_0]
root       159  0.0  0.0      0     0 ?        I<   08:43   0:00 [scsi_tmf_0]
root       160  0.0  0.0      0     0 ?        S    08:43   0:00 [scsi_eh_1]
root       161  0.0  0.0      0     0 ?        I<   08:43   0:00 [scsi_tmf_1]
root       162  0.0  0.0      0     0 ?        S    08:43   0:00 [scsi_eh_2]
root       163  0.0  0.0      0     0 ?        I<   08:43   0:00 [scsi_tmf_2]
root       164  0.0  0.0      0     0 ?        S    08:43   0:00 [scsi_eh_3]
root       165  0.0  0.0      0     0 ?        I<   08:43   0:00 [scsi_tmf_3]
root       201  0.0  0.0      0     0 ?        I<   08:43   0:00 [kworker/u9:0-i915-userptr-acquire]
root       202  0.0  0.0      0     0 ?        S    08:43   0:00 [i915/signal:0]
root       203  0.0  0.0      0     0 ?        S    08:43   0:00 [i915/signal:1]
root       204  0.0  0.0      0     0 ?        S    08:43   0:00 [i915/signal:2]
root       205  0.0  0.0      0     0 ?        S    08:43   0:00 [i915/signal:6]
root       208  0.1  0.0      0     0 ?        S    08:43   0:12 [irq/49-i2c_hid]
root       209  0.0  0.0      0     0 ?        I<   08:43   0:00 [kworker/0:1H-kblockd]
root       210  0.0  0.0      0     0 ?        I<   08:43   0:00 [kworker/1:1H-kblockd]
root       233  0.0  0.0      0     0 ?        I<   08:43   0:00 [kworker/2:1H-kblockd]
root       246  0.0  0.0      0     0 ?        I<   08:43   0:00 [kworker/3:1H-kblockd]
root       250  0.0  0.0      0     0 ?        S    08:43   0:00 [jbd2/sda2-8]
root       251  0.0  0.0      0     0 ?        I<   08:43   0:00 [ext4-rsv-conver]
root       289  0.0  0.1  39744  7636 ?        Ss   08:43   0:00 /lib/systemd/systemd-journald
root       321  0.0  0.0  23932  3184 ?        Ss   08:43   0:00 /lib/systemd/systemd-udevd
root       327  0.0  0.0      0     0 ?        S    08:43   0:00 [nvidia-modeset]
root       333  0.0  0.0      0     0 ?        S<   08:43   0:00 [loop0]
root       335  0.0  0.0      0     0 ?        S<   08:43   0:00 [loop1]
root       337  0.0  0.0      0     0 ?        S<   08:43   0:00 [loop2]
root       339  0.0  0.0      0     0 ?        S<   08:43   0:00 [loop3]
root       397  0.0  0.0      0     0 ?        S    08:43   0:00 [irq/56-mei_me]
root       449  0.0  0.0      0     0 ?        I<   08:43   0:00 [cfg80211]
root       473  0.0  0.0      0     0 ?        S    08:43   0:00 [wl_event_handle]
root       488  0.0  0.0      0     0 ?        I<   08:43   0:00 [kmemstick]
root       491  0.0  0.0      0     0 ?        I    08:43   0:01 [rtsx_usb_ms_2]
root       524  0.0  0.0      0     0 ?        I<   08:43   0:00 [kworker/u9:1-hci0]
root       543  0.0  0.0      0     0 ?        S    08:44   0:00 [jbd2/sda4-8]
root       544  0.0  0.0      0     0 ?        I<   08:44   0:00 [ext4-rsv-conver]
systemd+   559  0.0  0.1  93080  4148 ?        Ssl  08:44   0:00 /lib/systemd/systemd-timesyncd
root       580  0.1  0.0   8084  1556 ?        Ss   08:44   0:08 /usr/sbin/haveged --Foreground --verbose=1 -w 1024
root       588  0.0  0.1  31440  4632 ?        SNs  08:44   0:00 /usr/sbin/alsactl -E HOME=/run/alsa -s -n 19 -c rdaemon
nvpd       593  0.0  0.0   4868  1512 ?        Ss   08:44   0:00 /usr/bin/nvidia-persistenced --user nvpd
root       594  0.0  0.1 318364  5712 ?        Ssl  08:44   0:00 /usr/sbin/ModemManager --filter-policy=strict
avahi      595  0.0  0.0   8608  2996 ?        Ss   08:44   0:00 avahi-daemon: running [debian.local]
root       596  0.0  0.1  13492  4508 ?        Ss   08:44   0:00 /usr/lib/bluetooth/bluetoothd
rtkit      599  0.0  0.0 152844  2612 ?        SNsl 08:44   0:00 /usr/lib/rtkit/rtkit-daemon
root       600  0.0  0.0 226024  3144 ?        Ssl  08:44   0:00 /usr/sbin/rsyslogd -n -iNONE
root       603  0.0  0.0   8700  2524 ?        Ss   08:44   0:00 /usr/sbin/cron -f
root       604  0.0  0.1  19704  5052 ?        Ss   08:44   0:00 /lib/systemd/systemd-logind
message+   606  0.0  0.1  10008  4132 ?        Ss   08:44   0:01 /usr/bin/dbus-daemon --system --address=systemd: --nofork
root       607  0.0  0.1  20032  5924 ?        Ss   08:44   0:00 /sbin/wpa_supplicant -u -s -O /run/wpa_supplicant
root       608  0.0  0.3 808776 12828 ?        Ssl  08:44   0:01 /usr/sbin/NetworkManager --no-daemon
root       627  0.1  0.0      0     0 ?        S    08:44   0:08 [irq/59-nvidia]
root       628  0.0  0.0      0     0 ?        S    08:44   0:00 [nvidia]
clamav     632  0.0  0.2  50912  8868 ?        Ss   08:44   0:03 /usr/bin/freshclam -d --foreground=true
root       634  0.0  0.2 399240 10452 ?        Ssl  08:44   0:00 /usr/lib/udisks2/udisksd
root       635  0.0  0.3 1068912 14048 ?       Ssl  08:44   0:01 /usr/lib/snapd/snapd
daemon     636  0.0  0.0   5684  1960 ?        Ss   08:44   0:00 /usr/sbin/atd -f
avahi      707  0.0  0.0   8352    52 ?        S    08:44   0:00 avahi-daemon: chroot helper
root       710  0.0  0.1 237528  7860 ?        Ssl  08:44   0:00 /usr/lib/policykit-1/polkitd --no-debug
root       711  0.0  0.1 183224  7444 ?        Ssl  08:44   0:00 /usr/sbin/cups-browsed
root       719  0.0  0.3 233544 14104 ?        Ss   08:44   0:00 php-fpm: master process (/etc/php/7.3/fpm/php-fpm.conf)
mpd        720  0.0  0.4 289764 16520 ?        SLsl 08:44   0:00 /usr/bin/mpd --no-daemon
root       721  0.0  0.3 110564 11948 ?        Ssl  08:44   0:00 /usr/bin/python3 /usr/share/unattended-upgrades/unattende
root       734  0.0  0.5 1113052 23472 ?       Ssl  08:44   0:01 /usr/bin/containerd
root       738  0.0  0.1 239860  5580 ?        SLsl 08:44   0:00 /usr/sbin/lightdm
root       745  0.0  0.1  29272  4848 ?        Ss   08:44   0:00 /usr/sbin/cupsd -l
root       781  0.0  0.1  15948  4668 ?        Ss   08:44   0:00 /usr/sbin/sshd -D
mysql      801  0.6  7.2 2121632 286920 ?      Ssl  08:44   0:39 /usr/sbin/mysqld
root       805  2.5  1.5 383648 60288 tty7     Ssl+ 08:44   2:40 /usr/lib/xorg/Xorg :0 -seat seat0 -auth /var/run/lightdm/
root       806  0.0  0.0   5808  1392 tty1     Ss+  08:44   0:00 /sbin/agetty -o -p -- \u --noclear tty1 linux
www-data   859  0.0  0.1 233828  6828 ?        S    08:44   0:00 php-fpm: pool www
www-data   860  0.0  0.1 233828  6820 ?        S    08:44   0:00 php-fpm: pool www
root      1010  0.0  1.2 2595456 50996 ?       Ssl  08:44   0:03 /usr/bin/dockerd -H fd:// --containerd=/run/containerd/co
Debian-+  2383  0.0  0.0  20156  2324 ?        Ss   08:44   0:00 /usr/sbin/exim4 -bd -q30m
root      2578  0.0  0.1 167020  5684 ?        Sl   08:45   0:00 lightdm --session-child 14 23
dan09     2606  0.0  0.1  21376  5512 ?        Ss   08:45   0:00 /lib/systemd/systemd --user
dan09     2607  0.0  0.0 171224   576 ?        S    08:45   0:00 (sd-pam)
dan09     2618  0.0  0.1  25344  6172 ?        Ss   08:45   0:00 /usr/bin/python3 /usr/bin/powerline-daemon --foreground
dan09     2622  0.0  0.1 240572  4632 ?        Sl   08:45   0:00 /usr/bin/gnome-keyring-daemon --daemonize --login
dan09     2625  0.0  0.2  44492  9320 ?        Ss   08:45   0:02 i3
dan09     2633  0.0  0.0   9508  3716 ?        Ss   08:45   0:00 /usr/bin/dbus-daemon --session --address=systemd: --nofor
dan09     2678  0.0  0.0   5852    40 ?        Ss   08:45   0:00 /usr/bin/ssh-agent /usr/bin/im-launch i3
dan09     2696  0.6  0.1 386680  7900 ?        Ssl  08:45   0:38 /usr/bin/ibus-daemon --daemonize --xim
dan09     2699  0.0  0.2 240112  8260 ?        Ssl  08:45   0:00 /usr/lib/gvfs/gvfsd
dan09     2706  0.0  0.1 237004  5792 ?        Sl   08:45   0:00 /usr/lib/ibus/ibus-dconf
dan09     2707  0.1  0.6 328556 25216 ?        Sl   08:45   0:11 /usr/lib/ibus/ibus-ui-gtk3
dan09     2710  0.1  0.3 282628 12280 ?        Sl   08:45   0:08 /usr/lib/ibus/ibus-extension-gtk3
dan09     2712  0.0  0.2 201936 10072 ?        Sl   08:45   0:00 /usr/lib/ibus/ibus-x11 --kill-daemon
dan09     2715  0.0  0.1 236988  6284 ?        Sl   08:45   0:00 /usr/lib/ibus/ibus-portal
dan09     2720  0.0  0.1 312444  6004 ?        Ssl  08:45   0:00 /usr/lib/at-spi2-core/at-spi-bus-launcher
dan09     2725  0.0  0.0   9036  3300 ?        S    08:45   0:00 /usr/bin/dbus-daemon --config-file=/usr/share/defaults/at
dan09     2734  0.0  0.1 174148  6200 ?        Sl   08:45   0:03 /usr/lib/at-spi2-core/at-spi2-registryd --use-gnome-sessi
dan09     2744  0.0  0.0   2388   628 ?        S    08:45   0:00 /bin/sh -c compton
dan09     2747  0.5  0.1  30320  5612 ?        S    08:45   0:30 compton
dan09     2752  0.0  0.0   2388   692 ?        S    08:45   0:00 /bin/sh -c ~/.config/polybar/launch.sh
dan09     2755  0.0  0.0   2388   688 ?        S    08:45   0:00 sh /home/dan09/.config/polybar/launch.sh
dan09     2760  0.4  0.3 955192 13288 ?        Sl   08:45   0:24 polybar top
dan09     2766  0.0  0.4 912104 17168 ?        S<sl 08:45   0:00 /usr/bin/pulseaudio --daemonize=no
dan09     2768  0.0  0.1 246616  7868 ?        Sl   08:45   0:01 /usr/lib/ibus/ibus-engine-unikey --ibus
dan09     3030  0.1  0.1 163184  5536 ?        Sl   08:45   0:09 /usr/lib/ibus/ibus-engine-simple
dan09     3037  0.0  0.1 159340  4904 ?        Sl   08:45   0:00 /usr/lib/dconf/dconf-service
dan09     3077  1.9  2.6 1011496 105500 ?      Sl   08:46   1:58 /usr/share/code/code --no-sandbox --unity-launch
dan09     3080  0.0  0.3 204452 12560 ?        S    08:46   0:00 /usr/share/code/code --type=zygote --no-sandbox
dan09     3105  3.0  1.6 331228 65836 ?        Rl   08:46   3:06 /usr/share/code/code --type=gpu-process --field-trial-han
dan09     3151  0.0  0.0   2388   692 ?        S    08:46   0:00 /bin/sh -c i3-sensible-terminal
dan09     3152  0.1  0.8 603636 34184 ?        Sl   08:46   0:07 xfce4-terminal
dan09     3161  0.2  1.7 700316 69108 ?        SLl  08:46   0:15 /usr/share/code/code --type=renderer --disable-color-corr
dan09     3186  0.0  0.1   8504  3956 pts/0    Ss+  08:46   0:00 bash
dan09     3201  0.0  0.1 240288  6044 ?        Sl   08:46   0:00 /usr/bin/gnome-keyring-daemon --start --foreground --comp
dan09     3340  0.0  0.2 280544  9756 ?        Ssl  08:47   0:00 /usr/lib/gvfs/gvfs-udisks2-volume-monitor
dan09     3344  0.0  0.1 240820  6348 ?        Ssl  08:47   0:00 /usr/lib/gvfs/gvfs-gphoto2-volume-monitor
dan09     3348  0.0  0.1 236380  5412 ?        Ssl  08:47   0:00 /usr/lib/gvfs/gvfs-goa-volume-monitor
dan09     3352  0.0  0.1 238212  5588 ?        Ssl  08:47   0:00 /usr/lib/gvfs/gvfs-mtp-volume-monitor
dan09     3356  0.0  0.1 319056  6108 ?        Ssl  08:47   0:00 /usr/lib/gvfs/gvfs-afc-volume-monitor
dan09     3361  0.0  0.1 314212  5960 ?        Sl   08:47   0:00 /usr/lib/gvfs/gvfsd-trash --spawner :1.5 /org/gtk/gvfs/ex
dan09     3370  0.0  0.1 388064  6392 ?        Sl   08:47   0:00 /usr/lib/gvfs/gvfsd-network --spawner :1.5 /org/gtk/gvfs/
dan09     3400  0.0  0.1 315268  6648 ?        Sl   08:47   0:00 /usr/lib/gvfs/gvfsd-dnssd --spawner :1.5 /org/gtk/gvfs/ex
dan09     3410  6.5  5.9 934976 233292 ?       Rl   08:47   6:32 /usr/share/code/code --type=renderer --disable-color-corr
dan09     3433  0.5  2.2 554204 87180 ?        Sl   08:47   0:34 /usr/share/code/code --inspect-port=0 /usr/share/code/res
dan09     3445  0.0  0.8 430344 31928 ?        Sl   08:47   0:01 /usr/share/code/code /usr/share/code/resources/app/out/bo
dan09     4104  0.0  0.1   9224  5748 pts/1    Ss   08:52   0:00 /bin/bash
dan09     5079  0.0  0.1   9096  5528 pts/2    Ss   08:53   0:00 bash
root      6286  0.0  0.1   9488  5104 ?        S    09:00   0:00 /sbin/dhclient -d -q -sf /usr/lib/NetworkManager/nm-dhcp-
dan09     6471  7.1  8.5 3069820 338228 ?      Sl   09:01   6:09 /usr/lib/firefox-esr/firefox-esr
dan09     6597  1.1  5.4 2652884 215000 ?      Sl   09:02   0:58 /usr/lib/firefox-esr/firefox-esr -contentproc -childID 1 
dan09     6651  1.0  7.0 34192952 278860 ?     Sl   09:02   0:55 /usr/lib/firefox-esr/firefox-esr -contentproc -childID 2 
dan09     6741  0.6  4.4 2581576 176564 ?      Sl   09:02   0:34 /usr/lib/firefox-esr/firefox-esr -contentproc -childID 3 
dan09     6803  0.5  5.1 2630356 202436 ?      Sl   09:02   0:27 /usr/lib/firefox-esr/firefox-esr -contentproc -childID 4 
dan09     6852  4.2  6.3 2806608 252188 ?      Sl   09:02   3:37 /usr/lib/firefox-esr/firefox-esr -contentproc -childID 5 
dan09     6882  0.4  4.6 2549740 183972 ?      Sl   09:02   0:23 /usr/lib/firefox-esr/firefox-esr -contentproc -childID 6 
dan09     7569  0.9  5.3 2631184 210592 ?      Sl   09:10   0:42 /usr/lib/firefox-esr/firefox-esr -contentproc -childID 9 
dan09     7615  0.6  5.5 2634780 218424 ?      Sl   09:11   0:31 /usr/lib/firefox-esr/firefox-esr -contentproc -childID 10
dan09     8169  0.8  4.6 2722976 183908 ?      Sl   09:25   0:32 /usr/lib/firefox-esr/firefox-esr -contentproc -childID 12
root      9380  0.0  0.0      0     0 ?        D    09:34   0:00 [kworker/u8:3+events_unbound]
dan09     9429  0.8  2.9 512160 116956 ?       Sl   09:36   0:26 /usr/share/code/code --type=renderer --disable-color-corr
root      9687  0.0  0.0      0     0 ?        I    09:42   0:02 [kworker/2:0-events]
root      9959  0.0  0.0      0     0 ?        I    09:51   0:00 [kworker/1:1-usb_hub_wq]
root      9980  0.0  0.0      0     0 ?        I    09:51   0:00 [kworker/u8:0-events_unbound]
root     10171  0.0  0.0      0     0 ?        I    09:58   0:00 [kworker/0:3-mm_percpu_wq]
root     10702  0.0  0.0      0     0 ?        I    10:13   0:00 [kworker/0:0-rcu_gp]
root     10888  0.0  0.0      0     0 ?        I    10:19   0:00 [kworker/3:1-events]
root     10905  0.0  0.0      0     0 ?        I    10:20   0:00 [kworker/2:2-events]
root     10912  0.0  0.0      0     0 ?        I    10:21   0:00 [kworker/1:0-pm]
root     10922  0.0  0.0      0     0 ?        I    10:21   0:00 [kworker/0:1-rcu_gp]
root     10942  0.0  0.0      0     0 ?        I    10:22   0:00 [kworker/1:3-events]
root     10947  0.0  0.0      0     0 ?        I    10:22   0:00 [kworker/u8:1-events_unbound]
root     10962  0.0  0.0      0     0 ?        I    10:22   0:00 [kworker/u8:2-events_unbound]
dan09    10968  0.0  0.1   9380  4044 pts/2    S+   10:23   0:00 man ps
dan09    10980  0.0  0.0   5884  2556 pts/2    S+   10:23   0:00 pager
root     11001  0.0  0.0      0     0 ?        I    10:24   0:00 [kworker/u8:4-events_unbound]
root     11036  0.0  0.0      0     0 ?        I    10:25   0:00 [kworker/3:0-mm_percpu_wq]
root     11065  0.0  0.0      0     0 ?        I    10:25   0:00 [kworker/0:2-events]
root     11077  0.0  0.0      0     0 ?        I    10:26   0:00 [kworker/2:1-mm_percpu_wq]
dan09    11123  0.0  0.0  10828  3256 pts/1    R+   10:27   0:00 ps aux
```

**2.** Start a new process, gnome-calculator for example

Type this to the terminal (I choose xfce4-terminal)

```shell
xfce4-terminal
```

**3.** Find process id of your newly-created process (ps with grep)

```shell
ps aux | grep "xfce4-terminal" | awk 'NR==1{print $2}'
```

Output:
```shell
11914
```

**4.** Show its process status (see content of/proc/ids/status)

```shell
cat /proc/11914/status
```

Output:
```shell
Name:   xfce4-terminal
Umask:  0022
State:  S (sleeping)
Tgid:   11914
Ngid:   0
Pid:    11914
PPid:   11913
TracerPid:      0
Uid:    1000    1000    1000    1000
Gid:    1000    1000    1000    1000
FDSize: 64
Groups: 24 25 29 30 44 46 100 108 114 115 119 120 1000 1002 
NStgid: 11914
NSpid:  11914
NSpgid: 11912
NSsid:  11912
VmPeak:   577876 kB
VmSize:   513280 kB
VmLck:         0 kB
VmPin:         0 kB
VmHWM:     47652 kB
VmRSS:     47248 kB
RssAnon:           13256 kB
RssFile:           31944 kB
RssShmem:           2048 kB
VmData:    54156 kB
VmStk:       132 kB
VmExe:       168 kB
VmLib:     27124 kB
VmPTE:       292 kB
VmSwap:        0 kB
HugetlbPages:          0 kB
CoreDumping:    0
Threads:        3
SigQ:   0/14904
SigPnd: 0000000000000000
ShdPnd: 0000000000000000
SigBlk: 0000000000000000
SigIgn: 0000000000001000
SigCgt: 0000000180010000
CapInh: 0000000000000000
CapPrm: 0000000000000000
CapEff: 0000000000000000
CapBnd: 0000003fffffffff
CapAmb: 0000000000000000
NoNewPrivs:     0
Seccomp:        0
Speculation_Store_Bypass:       thread vulnerable
Cpus_allowed:   f
Cpus_allowed_list:      0-3
Mems_allowed:   00000000,00000001
Mems_allowed_list:      0
voluntary_ctxt_switches:        3341
nonvoluntary_ctxt_switches:     278
```

**5.** Pause it (kill with signal STOP)

```shell
kill 11941 STOP
```

**6.** Resume it (kill with singal CONT)

```shell
kill 11914 CONT
```

**7.** Terminate it (killwith signal KILL)

```shell
kill 11914 KILL
```