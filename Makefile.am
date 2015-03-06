ACLOCAL_AMFLAGS = -I m4

if BUILD_SAMPLES
samplesdir = Samples
IrrlichtDemo_CORRECTED = DependentExtensions/IrrDemo_CORR
else
samplesdir =
IrrlichtDemo_CORRECTED =
endif 


SUBDIRS = DependentExtensions Source $(samplesdir) $(IrrlichtDemo_CORRECTED) 

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

CLEANFILES = $(helppkg)
