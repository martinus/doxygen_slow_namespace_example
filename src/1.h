using namespace a::b::c;

namespace a {
using a::b::c::Xxx;
using namespace n;
} // namespace a

namespace a::b {
using namespace a::b::c;
} // namespace a::b

namespace a::b::c {
using a::b::c::k::Xxx;
using namespace a::b::c::k;
} // namespace a::b::c

namespace a::b::d {
using namespace o::b;
using namespace a::c;
using namespace a::b::c;
} // namespace a::b::d

namespace a::b::d::e {
using namespace n;
using namespace g::h;
using namespace a::b::f;
using namespace a::b::f; // having it twice makes it slower
} // namespace a::b::d::e

namespace a::b::i {
using a::b::c::k::Xxx;
using namespace a::b::j;
} // namespace a::b::i

namespace a::b::c::k {
using namespace a::b::d::g;
using namespace a::b::i;
using namespace a::c;
using namespace o::b;
} // namespace a::b::c::k

namespace a::b::d::g {
using namespace a::b::d::g::h;
} // namespace a::b::d::g

namespace a::b::d::g::h {
using namespace a::b::d::e;
} // namespace a::b::d::g::h

namespace a::b::j {
using namespace a::b;
using namespace a::b::j::l;
using namespace a::b::j::m;
} // namespace a::b::j

namespace a::b::j::l {
using namespace a::b::j;
} // namespace a::b::j::l

namespace a::b::j::m {
using namespace a::b::d;
} // namespace a::b::j::m
