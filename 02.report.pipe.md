# **Nguyen Duc Anh (BI9-041)**

## **Practical Work 2**

**1.** List all files in current directory containing «list» in their names (filter with grep)

```shell
ls | grep "list"
```

Output: **No output cause there are no files having "list" in it.**

**2.** Count how many lines that /etc/passwd has (use wc)

```shell
cat /etc/passwd | wc -l
```
Output: **45**

**3.** Check how much memory that your machine has, not free memory (use free)

```shell
free | awk 'NR==2{print $2}'
```
Output: **3950540**

**4.** Find how many logical core that your CPU has (see/proc/cpu info

```shell
grep --count processor /proc/cpuinfo
```

Output: **4**

**5.** Count how many .jpg files that you have in your photodirectory (use find)

```shell
find . -name "*.jpg" | wc -l
```

Output: **0**
