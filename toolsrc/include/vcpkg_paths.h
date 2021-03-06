#pragma once
#include <filesystem>
#include "expected.h"

namespace vcpkg
{
    struct vcpkg_paths
    {
        static expected<vcpkg_paths> create(const std::tr2::sys::path& vcpkg_root_dir);

        std::tr2::sys::path root;
        std::tr2::sys::path packages;
        std::tr2::sys::path buildtrees;
        std::tr2::sys::path downloads;
        std::tr2::sys::path ports;
        std::tr2::sys::path installed;
        std::tr2::sys::path triplets;

        std::tr2::sys::path buildsystems;
        std::tr2::sys::path buildsystems_msbuild_targets;

        std::tr2::sys::path vcpkg_dir;
        std::tr2::sys::path vcpkg_dir_status_file;
        std::tr2::sys::path vcpkg_dir_info;
        std::tr2::sys::path vcpkg_dir_updates;

        std::tr2::sys::path ports_cmake;
    };
}
