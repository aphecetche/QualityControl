add_executable(qc-mch-show-envelop src/showEnvelop.cxx)

target_link_libraries(qc-mch-show-envelop PUBLIC O2::MCHMappingSegContour)
