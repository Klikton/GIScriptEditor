module;
#include <wincodec.h>
#include <d2d1_3.h>
#include <wrl.h>
module image;

using namespace Editor::Tool;

static ComPtr<IWICImagingFactory> WicFactory;

ComPtr<ID2D1Bitmap> Image::LoadBitmapFromFile(ID2D1DeviceContext* ctx, const std::filesystem::path& path, int width, int height)
{
	if (!WicFactory) CoCreateInstance(CLSID_WICImagingFactory, nullptr, CLSCTX_INPROC_SERVER, IID_PPV_ARGS(&WicFactory));
	ComPtr<IWICBitmapDecoder> decoder;
	ComPtr<IWICBitmapFrameDecode> frame;
	ComPtr<IWICBitmapScaler> scaler;
	ComPtr<IWICFormatConverter> converter;
	ComPtr<ID2D1Bitmap> bitmap;
	WicFactory->CreateDecoderFromFilename(path.wstring().data(), nullptr, GENERIC_READ, WICDecodeMetadataCacheOnLoad, &decoder);
	decoder->GetFrame(0, &frame);
	WicFactory->CreateBitmapScaler(&scaler);
	scaler->Initialize(frame.Get(), width, height, WICBitmapInterpolationModeLinear);
	WicFactory->CreateFormatConverter(&converter);
	converter->Initialize(scaler.Get(), GUID_WICPixelFormat32bppPRGBA, WICBitmapDitherTypeNone, nullptr, 0.0f, WICBitmapPaletteTypeCustom);
	ctx->CreateBitmapFromWicBitmap(converter.Get(), nullptr, &bitmap);
	return bitmap;
}

ComPtr<ID2D1Bitmap> Image::LoadBitmapFromMemory(ID2D1DeviceContext* ctx, BYTE* data, size_t size, int width, int height)
{
	if (!WicFactory) CoCreateInstance(CLSID_WICImagingFactory, nullptr, CLSCTX_INPROC_SERVER, IID_PPV_ARGS(&WicFactory));
	ComPtr<IWICStream> stream;
	ComPtr<IWICBitmapDecoder> decoder;
	ComPtr<IWICBitmapFrameDecode> frame;
	ComPtr<IWICBitmapScaler> scaler;
	ComPtr<IWICFormatConverter> converter;
	ComPtr<ID2D1Bitmap> bitmap;
	WicFactory->CreateStream(&stream);
	stream->InitializeFromMemory(data, size);
	WicFactory->CreateDecoderFromStream(stream.Get(), nullptr, WICDecodeMetadataCacheOnLoad, &decoder);
	decoder->GetFrame(0, &frame);
	WicFactory->CreateBitmapScaler(&scaler);
	scaler->Initialize(frame.Get(), width, height, WICBitmapInterpolationModeLinear);
	WicFactory->CreateFormatConverter(&converter);
	converter->Initialize(scaler.Get(), GUID_WICPixelFormat32bppPRGBA, WICBitmapDitherTypeNone, nullptr, 0.0f, WICBitmapPaletteTypeCustom);
	ctx->CreateBitmapFromWicBitmap(converter.Get(), nullptr, &bitmap);
	return bitmap;
}
