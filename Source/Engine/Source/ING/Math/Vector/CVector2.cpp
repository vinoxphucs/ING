
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
		Vector2 CVector2::Transpose() {
			return Vector2(
				x, y
			);
		}



		/**
		 *	Operators
		 */
		Matrix2x4 CVector2::operator*(Vector4 next) {
			return Matrix2x4(
				next * x,
				next * y
			);
		}

		Matrix2x3 CVector2::operator*(Vector3 next) {
			return Matrix2x3(
				next * x,
				next * y
			);
		}

		Matrix2x2 CVector2::operator*(Vector2 next) {
			return Matrix2x2(
				next * x,
				next * y
			);
		}

	}

}