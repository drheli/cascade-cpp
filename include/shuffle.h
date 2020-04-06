#ifndef SHUFFLE_H
#define SHUFFLE_H

#include <algorithm>
#include <memory>
#include <stdint.h>
#include <vector>

namespace Cascade {

class Shuffle
{
public:
    Shuffle(int nr_bits, bool identity, bool assign_seed);
    Shuffle(int nr_bits, bool identity, uint64_t seed);
    ~Shuffle();
    uint64_t get_seed() const;
    int get_nr_bits() const;
    int orig_to_shuffle(int orig_bit_nr) const;
    int shuffle_to_orig(int shuffle_bit_nr) const;
private:
    void initialize(bool assign_seed);
    int nr_bits;
    bool identity;
    bool has_seed;
    uint64_t seed;
    typedef std::vector<int> BitMap;
    BitMap shuffled_to_orig_map;
    BitMap orig_to_shuffled_map;
};

typedef std::shared_ptr<Shuffle> ShufflePtr;

} /* namespace Cascade */

#endif /* ifndef SHUFFLE_H */
