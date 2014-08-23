ACLOCAL_AMFLAGS = -I m4

SUBDIRS = DependentExtensions Source

#Help docs
helppkg = Help-$(PACKAGE_VERSION).tar.gz

EXTRA_DIST = $(helppkg)

doc_DATA = $(helppkg)

$(helppkg):
	find $(srcdir)/Help -type f -print | cpio -o -H ustar | gzip -9 -c >$@

install-data-hook:
	cd $(DESTDIR)$(docdir) && tar xf $(helppkg)
	cd $(DESTDIR)$(docdir) && rm -rf $(helppkg)

uninstall-local:
	cd $(DESTDIR)$(docdir) && rm -rf Help

dist-hook:
	rm -rf $(helppkg)
