target_sources(
        liblasthaven
        PRIVATE
        application.cxx
        window_system.cxx
)

if(LINUX)
        target_sources(
                liblasthaven
                PRIVATE
                platform/linux/window_system.cxx
        )
endif()

target_sources(
        lasthaven
        PRIVATE
        main.cxx
)
