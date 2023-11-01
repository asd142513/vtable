.PHONY: all clean novirt_c novirt_cxx virt_c virt_cxx

all: novirt_c novirt_cxx virt_c virt_cxx

clean:
	rm novirt_c/main novirt_cxx/main virt_c/main virt_cxx/main

novirt_c:
	$(MAKE) -C $@

novirt_cxx:
	$(MAKE) -C $@

virt_c:
	$(MAKE) -C $@

virt_cxx:
	$(MAKE) -C $@
