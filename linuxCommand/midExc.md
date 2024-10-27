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
mount /dev/sdb"X" "your path"
```

sucess?

```bash
lsblk
```

search uuid

```bash
lsblk -f
```

### auto 

go to `/etc/fstab`

```
cd /dev
sudo vim fstab
```
or 
```
sudo vim /etc/fstab
```

and add this line and save this 

```
UUID="UUID" ext4 "your path" default 1 0
```


## usermod

add user

```bash
sudo adduser "username"
```

switch user 
```bash
su "username"
```

show the permission
```
sudo -l
```

get someone permission
```bash
sudo usermod sudo "username"
```
