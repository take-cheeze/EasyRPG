find_path(ICONV_INCLUDE_DIR iconv.h)
find_library(ICONV_LIBRARY iconv)
if((EXISTS ${ICONV_INCLUDE_DIR}) AND (EXISTS ${ICONV_LIBRARY}))
  set(Iconv_FOUND TRUE)
  if((${APPLE}) AND (${ICONV_LIBRARY} MATCHES "/usr/lib"))
    string(REPLACE "/usr/lib" "/opt/local/lib" macports_iconv_library ${ICONV_LIBRARY})
    if(EXISTS ${macports_iconv_library})
      list(APPEND EASYRPG_PLAYER_LIBRARIES ${macports_iconv_library})
    endif()
  endif()
else()
  set(Iconv_FOUND FALSE)
endif()
