#############################################################
#
# libtool
#
#############################################################
LIBTOOL_VERSION = 2.2.10
LIBTOOL_SOURCE = libtool-$(LIBTOOL_VERSION).tar.gz
LIBTOOL_SITE = $(BR2_GNU_MIRROR)/libtool
LIBTOOL_INSTALL_STAGING = YES

HOST_LIBTOOL_LIBTOOL_PATCH = NO

$(eval $(call AUTOTARGETS))
$(eval $(call AUTOTARGETS,host))

# variables used by other packages
LIBTOOL:=$(TOOLCHAINS_DIR)/bin/libtool
LIBTOOLIZE:=$(TOOLCHAINS_DIR)/bin/libtoolize
