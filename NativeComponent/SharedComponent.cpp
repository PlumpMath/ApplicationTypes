#include "pch.h"
#include "SharedComponent.h"

using namespace NativeComponent;
using namespace Platform;

SharedComponent::SharedComponent()
{
}

String^ SharedComponent::DoWork(String^ input) {
	std::wstring temp(input->Data());
	std::reverse(temp.begin(), temp.end());
	return ref new String(temp.data());
}

void SharedComponent::SetCallback(ISharedInterface^ callback) {
	mCallback = callback;

	mCallback->Callback("Work done in C++");
}
