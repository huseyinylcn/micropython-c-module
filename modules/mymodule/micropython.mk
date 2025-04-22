MYMODULE_MOD_DIR := $(USERMOD_DIR)

# Kaynak kodlarınızı ekleyin
SRC_USERMOD_C += $(MYMODULE_MOD_DIR)/mymodule.c

# Eğer başlık dosyalarınız varsa, burada include path ekleyebilirsiniz
CFLAGS_USERMOD += -I$(MYMODULE_MOD_DIR)
