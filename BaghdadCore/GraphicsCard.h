#pragma once

#include <wrl/client.h>

#include "D3D11.h"

namespace BaghdadCore
{
	class GraphicsCard
	{
	public:
		GraphicsCard(Microsoft::WRL::ComPtr<IDXGIAdapter>&& pOther);

	private:
		Microsoft::WRL::ComPtr<IDXGIAdapter> _ptr;
	};
}