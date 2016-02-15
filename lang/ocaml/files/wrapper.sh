#!@SH@

# $NetBSD: wrapper.sh,v 1.2 2005/02/04 21:35:51 adrianp Exp $

BINDIR='@OCAML_PREFIX@'
CFLAGS='@CFLAGS@'
LDFLAGS='@LDFLAGS@'
WRAPPEE='@WRAPPEE@'

if echo "$@" | grep ' -c ' >/dev/null || [ "${WRAPPEE}" = "ocamlmklib" ]; then
	flags="${CFLAGS}"
else
	flags="${CFLAGS} ${LDFLAGS}"
fi

for f in ${flags}
do
	MLFLAGS="${MLFLAGS} -ccopt ${f}"
done

if [ "${WRAPPEE}" = "ocamlmklib" ]; then
	MLFLAGS="${MLFLAGS} ${LDFLAGS}"
fi

exec "@OCAML_PREFIX@/bin/${WRAPPEE}" ${MLFLAGS} "$@"
