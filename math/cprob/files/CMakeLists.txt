PROJECT(CPROB)

SET(LIBPROB_SOURCES
  bdtr.c btdtr.c chdtr.c drand.c fdtr.c gamma.c gdtr.c igam.c
  igami.c incbet.c incbi.c mtherr.c nbdtr.c ndtr.c ndtri.c pdtr.c
  stdtr.c unity.c polevl.c const.c)

ADD_LIBRARY(prob STATIC ${LIBPROB_SOURCES})

INSTALL(TARGETS prob DESTINATION lib)

INSTALL_FILES(include .*\\.h$)
