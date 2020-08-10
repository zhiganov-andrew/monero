set(ringct_main_sources
    main.cpp
)

monero_private_headers(ringct_main
        ${crypto_private_headers})

monero_add_executable(ringct_main
        ${ringct_main_sources})

target_link_libraries(ringct_main
    PUBLIC
        common
        cncrypto
        cryptonote_basic
        device
        ringct
    PRIVATE
        ${OPENSSL_LIBRARIES}
        ${EXTRA_LIBRARIES})
set_property(TARGET ringct_main
        PROPERTY
        OUTPUT_NAME "ringct_main")
install(TARGETS ringct_main DESTINATION bin)
