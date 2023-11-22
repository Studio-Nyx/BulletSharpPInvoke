﻿using System.Runtime.InteropServices;

namespace BulletSharp
{
    public static class Native
    {
#if DEBUG
        public const string Dll = "libbulletc_Debug";
#else
        public const string Dll = "libbulletc";
#endif

        public const CallingConvention Conv = CallingConvention.Cdecl;
    }
}
