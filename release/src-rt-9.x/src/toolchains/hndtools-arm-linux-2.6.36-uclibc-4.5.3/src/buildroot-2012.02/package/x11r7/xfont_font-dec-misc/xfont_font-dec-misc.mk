################################################################################
#
# font-dec-misc -- No description available
#
################################################################################

XFONT_FONT_DEC_MISC_VERSION = 1.0.1
XFONT_FONT_DEC_MISC_SOURCE = font-dec-misc-$(XFONT_FONT_DEC_MISC_VERSION).tar.bz2
XFONT_FONT_DEC_MISC_SITE = http://xorg.freedesktop.org/releases/individual/font
XFONT_FONT_DEC_MISC_INSTALL_STAGING_OPT = DESTDIR=$(STAGING_DIR) MKFONTSCALE=$(TOOLCHAINS_DIR)/bin/mkfontscale MKFONTDIR=$(TOOLCHAINS_DIR)/bin/mkfontdir install
XFONT_FONT_DEC_MISC_INSTALL_TARGET_OPT = DESTDIR=$(TARGET_DIR) MKFONTSCALE=$(TOOLCHAINS_DIR)/bin/mkfontscale MKFONTDIR=$(TOOLCHAINS_DIR)/bin/mkfontdir install-data
XFONT_FONT_DEC_MISC_DEPENDENCIES = xfont_font-util host-xfont_font-util host-xapp_mkfontscale host-xapp_mkfontdir host-xapp_bdftopcf

$(eval $(call AUTOTARGETS))

