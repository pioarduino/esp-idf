idf_build_get_property(target IDF_TARGET)
if(${target} STREQUAL "linux")
    return() # This component is not supported by the POSIX/Linux simulator
endif()

set(srcs)

if(CONFIG_SOC_BITSCRAMBLER_SUPPORTED)
    list(APPEND srcs "src/bitscrambler.c" "src/bitscrambler_loopback.c" "src/bitscrambler_${target}.c")
endif()

idf_component_register(SRCS ${srcs}
                       PRIV_REQUIRES "esp_mm"
                       INCLUDE_DIRS "include"
                       LDFRAGMENTS "linker.lf")
