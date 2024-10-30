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


## set user bit

cd to root and create a folder name "Share"
```bash
cd /home && sudo mkdir share
```

into `share` and create a c file

```
cd share
vim ./test.cpp
```

the code

```ts
import { writeFileSync, existsSync, appendFileSync } from "fs";
import readline from "readline";

const data = "./data.txt";
const example = "example: 091234567";

if (!existsSync(data)) {
  writeFileSync(data, example);
}

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout,
});

const askQuestion = (query) =>
  new Promise((resolve) => rl.question(query, resolve));

(async () => {
  const name = await askQuestion("Enter the name: ");
  const phone = await askQuestion("Enter the phone number: ");
  const newEntry = `${name}: ${phone}`;

  appendFileSync(data, `\n${newEntry}`);
  console.log(`Added ${newEntry} to ${data}`);
  rl.close();
})();
```
