# linux command 

## add some disk to ubuntu

first, add disk in your VM

then use fdisk to partition

```bash
fdisk /dev/"sdb"
```
make dir 

```bash
mkdir "path"
```

```bash
mkfs -t ext4 /dev/sdb"X"
```

mount your disk

```bash
mount /dev/sdb"X" "ypur path"
```

sucess?

```bash
lsblk
```

search uuid
```bash
lsblk -f
```

## usermod

```bash
sudo usermod sudo "username"
```
