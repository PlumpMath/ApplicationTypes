#pragma once

#include <SharedInterface.h>

namespace NativeComponent
{
    public ref class SharedComponent sealed
    {
    public:
		SharedComponent();
		Platform::String^ DoWork(Platform::String^ input);
		void SetCallback(ISharedInterface^ callback);

	private:
		ISharedInterface^ mCallback;
    };
}
