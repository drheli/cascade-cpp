#ifndef ALGORITHM_H
#define ALGORITHM_H

#include <string>
#include <vector>

namespace Cascade {

class Algorithm
{
public:
    Algorithm(std::string name, 
              int nr_cascade_iterations,
              int (*block_size_function)(int iteration_nr, double estimated_bit_error_rate,
                                         int key_size),
              int nr_biconf_iterations,
              bool biconf_error_free_streak,
              bool biconf_correct_complement,
              bool biconf_cascade,
              bool sub_block_reuse,             // TODO: Implement this
              bool block_parity_inference);
    static Algorithm *get_by_name(std::string name);
    static std::vector<std::string> get_all_algorithm_names();
    std::string name;
    int nr_cascade_iterations;
    int (*block_size_function)(int iteration_nr, double estimated_bit_error_rate, int key_size);
    int nr_biconf_iterations;
    bool biconf_error_free_streak;
    bool biconf_correct_complement;
    bool biconf_cascade;
    bool sub_block_reuse;
    bool block_parity_inference;
};

} /* namespace Cascade */

#endif /* ifndef ALGORITHM_H */
