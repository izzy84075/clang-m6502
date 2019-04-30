#include "M6502.h"
#include "clang/Basic/MacroBuilder.h"

using namespace clang;
using namespace clang::targets;

void M6502TargetInfo::getTargetDefines(const LangOptions &Opts,
                                       MacroBuilder &Builder) const {
  // FIXME: use an existing #define name if one has been established by other compilers.
    // See <http://cc65.github.io/doc/cc65.html#s6>
  Builder.defineMacro("M6502");
  Builder.defineMacro("__M6502__");
}