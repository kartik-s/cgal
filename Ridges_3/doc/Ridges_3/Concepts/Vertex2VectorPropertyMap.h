
/*!
\ingroup PkgRidges_3Concepts
\cgalconcept

The concept `Vertex2VectorPropertyMap` specializes the concept of LvaluePropertyMap 
of the Boost library. It is intended to be used in combination with 
the concept `TriangulatedSurfaceMesh` in the class 
`Ridge_approximation`. It associates a three dimensional vector 
`TriangulatedSurfaceMesh::Traits::Vector_3` to keys which are 
`TriangulatedSurfaceMesh::Vertex_handle`. 

\hasModel `Vertex2Data_Property_Map_with_std_map::Vertex2Vector_property_map`

\sa `TriangulatedSurfaceMesh`
*/
class Vertex2VectorPropertyMap {
public:

/// @}

}; /* end Vertex2VectorPropertyMap */

