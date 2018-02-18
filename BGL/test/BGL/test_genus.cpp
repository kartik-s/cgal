#include "test_Prefix.h"

#include <CGAL/boost/graph/helpers.h>

template<typename TriangleMesh>
void test(const std::string &filename, int expected_genus)
{
  TriangleMesh m;

  if (!CGAL::read_off(filename, m)) {
    std::cout << "Error reading file: " << filename << std::endl;
  }

  assert(CGAL::is_valid(m));
  assert(CGAL::genus(m) == expected_genus);
}

int main()
{
  test<SM>("data/sphere.off", 0);
  test<SM>("data/elephant.off", 3);
  test<Polyhedron>("data/sphere.off", 0);
  test<Polyhedron>("data/elephant.off", 3);
  test<LCC>("data/sphere.off", 0);
  test<LCC>("data/elephant.off", 3);
#if defined(CGAL_USE_OPENMESH)
  test<OMesh>("data/sphere.off", 0);
  test<OMesh>("data/elephant.off", 3);
#endif

  return 0;
}
