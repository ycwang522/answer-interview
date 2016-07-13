// Determine whether a ray intersect with a triangle
// Parameters
// orig: origin of the ray
// dir: direction of the ray
// v0, v1, v2: vertices of triangle
// t(out): weight of the intersection for the ray
// u(out), v(out): barycentric coordinate of intersection



#include"vector3.h"
bool IntersectTriangle(const Vector3& orig, const Vector3& dir,
	Vector3& v0, Vector3& v1, Vector3& v2,
	float* t, float* u, float* v)
{
	// E1
	Vector3 E1 = v1 - v0;

	// E2
	Vector3 E2 = v2 - v0;

	// P P=D¡ÁE2²æ³Ë¹ØÏµ
	Vector3 P = P.CrossProduct(dir, E2);

	// determinant
	float det = E1*P;
	//float det = E1.Dot(P);

	// keep det > 0, modify T accordingly
	Vector3 T;
	if (det >0)
	{
		T = orig - v0;
	}
	else
	{
		T = v0 - orig;
		det = -det;
	}

	// If determinant is near zero, ray lies in plane of triangle
	if (det < 0.0001f)
		return false;

	// Calculate u and make sure u <= 1
	//*u = T.Dot(P);
	*u = T*P;

	if (*u < 0.0f || *u > det)
		return false;

	// Q
	//Vector3 Q = T.Cross(E1);
	Vector3 Q = Q.CrossProduct(T, E1);

	// Calculate v and make sure u + v <= 1
	//*v = dir.Dot(Q);
	*v = dir*Q;

	if (*v < 0.0f || *u + *v > det)
		return false;

	// Calculate t, scale parameters, ray intersects triangle
	//*t = E2.Dot(Q);
	*t = E2*Q;

	float fInvDet = 1.0f / det;
	*t *= fInvDet;
	*u *= fInvDet;
	*v *= fInvDet;

	return true;
}




