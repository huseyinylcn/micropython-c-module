// Include the header file to get access to the MicroPython API
#include "py/runtime.h"
#include "py/obj.h"

// Örnek bir fonksiyon - İki sayıyı toplar
static mp_obj_t mymodule_add(mp_obj_t a_obj, mp_obj_t b_obj) {
    // Sayıları al
    mp_int_t a = mp_obj_get_int(a_obj);
    mp_int_t b = mp_obj_get_int(b_obj);
    
    // Topla ve sonucu döndür
    return mp_obj_new_int(a + b);
}
// İki parametre alan fonksiyon
static MP_DEFINE_CONST_FUN_OBJ_2(mymodule_add_obj, mymodule_add);

// Modül global değişkenlerini tanımla
static const mp_rom_map_elem_t mymodule_globals_table[] = {
    { MP_ROM_QSTR(MP_QSTR___name__), MP_ROM_QSTR(MP_QSTR_mymodule) },
    { MP_ROM_QSTR(MP_QSTR_add), MP_ROM_PTR(&mymodule_add_obj) },
};
static MP_DEFINE_CONST_DICT(mymodule_globals, mymodule_globals_table);

// Modülü tanımla
const mp_obj_module_t mymodule_user_cmodule = {
    .base = { &mp_type_module },
    .globals = (mp_obj_dict_t*)&mymodule_globals,
};

// Modülü kaydet - Varsayılan olarak etkinleştirilmiş
MP_REGISTER_MODULE(MP_QSTR_mymodule, mymodule_user_cmodule);
