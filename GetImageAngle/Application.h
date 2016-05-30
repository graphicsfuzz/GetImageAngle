#pragma once

#include "stdafx.h"

#include "HelloTriangleRenderer.h"

namespace GetImageAngle
{
    class Application
    {
    public:
        Application(const std::wstring& windowTitle);

        int Run();

        void OnWindowSizeChanged(int width, int height);
        void OnWindowClose();

    private:
        bool InitializeEGL();
        void CleanupEGL();

        bool InitializeWindow(int width, int height);
        void CleanupWindow();

        void Step(double deltaTime, double elapsedTime);

        EGLDisplay mEglDisplay;
        EGLContext mEglContext;
        EGLSurface mEglSurface;
        EGLNativeWindowType mNativeWindow;

        HDC mHDC;

        std::unique_ptr<HelloTriangleRenderer> mTriangleRenderer;

        std::wstring mWindowTitle;
        bool mIsRunning;

    };
}