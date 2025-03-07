
/**
 *	Include Vector
 */
#include <ING/Math/Vector/Vector.h>



 /**
  *	Include Matrix
  */
#include <ING/Math/Matrix/Matrix.h>



namespace ING {

	namespace Math {

		/**
		 *	Methods
		 */
		CVector3 Vector3::Transpose() {
			return CVector3(x, y, z);
		}



		/**
		 *	Operators
		 */
		Vector4 Vector3::operator*(Matrix3x4 next) {
			Matrix4x3 tNext = next.Transpose();
			return Vector4(
				Vector3::DotProduct(tNext.rows[0], *this),
				Vector3::DotProduct(tNext.rows[1], *this),
				Vector3::DotProduct(tNext.rows[2], *this),
				Vector3::DotProduct(tNext.rows[3], *this)
			);
		}

		Vector3 Vector3::operator*(Matrix3x3 next) {
			Matrix3x3 tNext = next.Transpose();
			return Vector3(
				Vector3::DotProduct(tNext.rows[0], *this),
				Vector3::DotProduct(tNext.rows[1], *this),
				Vector3::DotProduct(tNext.rows[2], *this)
			);
		}

		Vector2 Vector3::operator*(Matrix3x2 next) {
			Matrix2x3 tNext = next.Transpose();
			return Vector2(
				Vector3::DotProduct(tNext.rows[0], *this),
				Vector3::DotProduct(tNext.rows[1], *this)
			);
		}

		float Vector3::operator*(CVector3 next) {
			Vector3 tNext = next.Transpose();
			return (
				Vector3::DotProduct(tNext, *this)
			);
		}

	}

}
