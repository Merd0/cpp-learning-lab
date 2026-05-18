# Türkçe Yol

Bu klasör C++ konularını Türkçe anlatır. Amaç sadece syntax ezberi yapmak
değil; OOP, RAII, ownership, STL, template, test, CMake ve sürdürülebilir proje
düzenini birlikte öğrenmektir.

## Konular

- `00_toolchain`: compiler, CMake, CI ve ilk çalıştırılabilir dosya.
- `01_basics`: tipler, initialization, `auto` ve güvenli başlangıçlar.
- `02_functions_references`: fonksiyonlar, referanslar, `const` ve mutation
  niyeti.
- `03_classes_oop`: class, invariant, encapsulation, polymorphism ve virtual
  destructor.
- `04_raii_memory`: resource lifetime ve ownership.
- `05_stl`: standard container ve algorithm temeli.
- `06_smart_pointers`: `unique_ptr`, `shared_ptr`, `weak_ptr`.
- `07_move_semantics`: copy, move, Rule of 0 ve Rule of 5 yönü.
- `08_error_handling`: exception, `std::optional` ve status enum.
- `09_file_io`: stream tabanlı text file record işlemleri.
- `10_templates`: type-safe generic code.
- `11_low_level_cpp`: byte, alignment ve flag mantığı.
- `12_concurrency`: thread, mutex ve shared state.
- `13_patterns_architecture`: küçük pattern ve architecture kararları.
- `14_core_language_details`: scope, `enum class`, `static` ve state kontrolü.
- `15_strings_views`: `std::string`, `std::string_view` ve text lifetime.
- `16_containers_iterators`: map, set, iterator ve container seçimi.
- `17_lambdas_algorithms`: lambda capture ve algorithm pipeline.
- `18_compile_time_constexpr`: `constexpr`, `static_assert`, compile-time veri.
- `19_variant_tuple_enum`: `std::variant`, `std::tuple` ve alternatif veri.
- `20_operator_overloading`: value type için operator tasarımı.
- `21_namespaces_headers`: namespace ve header API sınırları.
- `22_casts_type_safety`: explicit castler ve type safety.
- `23_testing_practices`: deterministic test ve küçük test harness.
- `24_filesystem_chrono`: taşınabilir path ve type-safe zaman.
- `25_atomics_intro`: atomic counter ve temel shared-state güvenliği.
- `projects/bank_account_oop`: testli modüler OOP projesi.

## Nasıl Çalışılır?

1. `LEARNING_PATH.md` sırasını takip et.
2. Örnekten önce konu README dosyasını oku.
3. Her şeyi repo root klasöründen build et.
4. Object lifetime, ownership ve invariant akışını takip et.
5. Küçük bir davranışı değiştirip tekrar build al.
6. Yeni örnekleri sadece gerçek bir C++ fikri öğretiyorsa ekle.
