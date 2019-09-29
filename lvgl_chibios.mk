include $(LVGL_DIR)/lvgl/src/lv_core/lv_core_chibios.mk
include $(LVGL_DIR)/lvgl/src/lv_hal/lv_hal_chibios.mk
include $(LVGL_DIR)/lvgl/src/lv_objx/lv_objx_chibios.mk
include $(LVGL_DIR)/lvgl/src/lv_font/lv_font_chibios.mk
include $(LVGL_DIR)/lvgl/src/lv_misc/lv_misc_chibios.mk
include $(LVGL_DIR)/lvgl/src/lv_themes/lv_themes_chibios.mk
include $(LVGL_DIR)/lvgl/src/lv_draw/lv_draw_chibios.mk
include $(LVGL_DIR)/lv_drivers/lv_drv_chibios.mk

LVGLINC += $(LVGL_DIR)/lvgl     \
           $(LVGL_DIR)/lvgl/src
LVGLSRC +=