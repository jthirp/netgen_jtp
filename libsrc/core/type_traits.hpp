

namespace ngcore
{
  template<bool... b> struct _BoolArray{};
  template<bool ... vals>
  constexpr bool all_of_tmpl = std::is_same<_BoolArray<vals...>, _BoolArray<(vals || true)...>>::value;
}
