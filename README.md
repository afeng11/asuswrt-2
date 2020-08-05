# asuswrt
启用i386架构（非常重要）否则下面的两个i386无法安装成功

dpkg --add-architecture i386
apt-get update

更新依赖
apt install aptitude
aptitude install r-base-core

apt-get install xsltproc cmake 
apt-get install libxml2-dev
sudo apt-get install --no-install-recommends autoconf automake bash bison bzip2 diffutils file flex g++ gawk gcc-multilib gettext gperf groff-base libncurses-dev libexpat1-dev libslang2 libssl-dev libtool libxml-parser-perl make patch perl pkg-config python sed shtool tar texinfo unzip zlib1g zlib1g-dev

sudo apt-get install lib32stdc++6 lib32z1-dev

sudo apt-get --no-install-recommends install automake1.11

sudo apt-get install libelf-dev:i386 libelf1:i386

sudo apt-get --no-install-recommends install lib32z1-dev lib32stdc++6



https://www.asus.com/tw/Networking/RT-AC1200G-plus/HelpDesk_Download/

nano /etc/profile 


export PATH=$PATH:/opt/asuswrt/release/src-rt-9.x/src/toolchains/hndtools-arm-linux-2.6.36-uclibc-4.5.3/bin

source /etc/profile


/opt/asuswrt/release/src-rt-9.x/src/toolchains/hndtools-arm-linux-2.6.36-uclibc-4.5.3/bin/arm-brcm-linux-uclibcgnueabi-gcc



http://blog.iytc.net/wordpress/?p=2193

wget https://dlcdnets.asus.com/pub/ASUS/wireless/RT-AC1200G+/GPL_RT_AC1200GPlus_300438252272.zip --no-check-certificate

unzip GPL_RT_AC1200GPlus_300438252272.zip
tar zxvf GPL_RT-AC1200G+_3.0.0.4.382.52272-g73d3ea2_fix.tgz


nano "/opt/asuswrt/release/src/router/rc/init.c"

修改GPIO设置适配AC9
asuswrt\release\src-rt-9.x\src\router\rc\init.c，搜索case MODEL_RTAC1200GP，修改GPIO：
nvram_set_int("btn_rst_gpio", 7|GPIO_ACTIVE_LOW);
nvram_set_int("btn_wps_gpio", 9|GPIO_ACTIVE_LOW);
nvram_set_int("led_pwr_gpio", 15);
nvram_set_int("led_wps_gpio", 10);
nvram_set_int("led_usb_gpio", 1);

nano /opt/asuswrt/release/src/router/tools/Lnx_AsusWrtDictPrep/dictctrl.txt
[MODEL]
RT-AC1200G+
EN,CN

修改菜单
src/router/www/require/modules/menuTree.js

设置环境变量

export PATH=$PATH:/opt/asuswrt/release/src-rt-9.x/src/toolchains/hndtools-arm-linux-2.6.36-uclibc-4.5.3/bin

cd /opt/asuswrt/release/src-rt-9.x/src/
make RT-AC1200G+

也可以通过图形界面来进行定制：
cd /opt/ac1200g/asuswrt/release/src/router
export SRCBASE=/opt/asuswrt/release/src-rt-9.x/src
make menuconfig


apt-get install autoconf automake bash bison bzip2 diffutils file flex m4 g++ gawk groff-base libncurses-dev libtool libslang2 make patch perl pkg-config shtool subversion tar texinfo zlib1g zlib1g-dev git-core gettext libexpat1-dev libssl-dev cvs gperf unzip python libxml-parser-perl gcc-multilib gconf-editor libxml2-dev g++-5 g++-multilib gitk libncurses5 mtd-utils libncurses5-dev libvorbis-dev g++-5-multilib git autopoint autogen sed lib32z1-dev lib32stdc++6 build-essential intltool libelf1:i386 libglib2.0-dev xutils-dev libltdl7-dev libproxy-dev


Your intltool is too old. You need intltool 0.35.0 or later
按顺序执行下方命令：

wget http://ftp.gnome.org/pub/gnome/sources/intltool/0.40/intltool-0.40.6.tar.gz

tar -zxvf intltool-0.40.6.tar.gz

cd intltool-0.40.6

./configure --prefix=/usr

make && make install

如果./configure后面不加 --prefix=/usr可能会出现问题
