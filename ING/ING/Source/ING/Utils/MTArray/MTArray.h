#pragma once

#include <ING\EntryPoint\EntryPoint.h>



#include <vector>





namespace ING {

	namespace Utils {

		class ING_API MTArray {

			/*
			 *	Constructors And Destructor
			 */
		public:
			MTArray(ui64 size) {

				Resize(size);

			}
			MTArray() :
				MTArray(0)
			{

			}
			~MTArray() {

				Clear();

			}



			/*
			 *	Classes And Structs
			 */
		public:
			struct Element {
			private:
				void* pData;

			public:
				void* GetPData() { return pData; }

			public:
				template<typename T>
				void operator = (T next) {

					if (pData != nullptr) {
						free(pData);
					}

					pData = malloc(sizeof(T));

					memcpy(pData, &next, sizeof(T));

				}

				template<typename T>
				T GetData() {
					return *((T*)pData);
				}

			};



			/*
			 *	Size
			 */
		private:
			ui64 mSize;

		public:
			ui64 GetSize() { return mSize; }

			void Resize(ui64 size) {

				if (size == mSize) return;

				if (size != 0) {

					if (size < mSize) {

						for (ui64 i = size; i < mSize; ++i) {

							if (vector[i].GetPData() != nullptr)
								free(vector[i].GetPData());

						}

						vector.resize(size);



						mSize = size;
						return;

					}
					else if (size > mSize) {

						vector.resize(size);

						for (ui64 i = mSize; i < size; ++i) {

							vector[i] = Element();

						}



						mSize = size;
						return;

					}

				}
				else {
					Clear();



					mSize = size;
					return;
				}

			}



			/*
			 *	vector
			 */
		private:
			std::vector<Element> vector;



			/*
			 *	Clear Method
			 */
		public:
			void Clear() {

				if (GetSize() != 0) {

					for (ui64 i = 0; i < mSize; ++i) {

						if (vector[i].GetPData() != nullptr)
							free(vector[i].GetPData());

					}

					vector.clear();

					mSize = 0;

				}

			}



			/*
			 *	Operators
			 */
		public:
			Element& operator[](ui64 index) {

				return vector[index];

			}


		};

	}

}