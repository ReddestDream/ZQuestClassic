#ifndef ZC_SCRIPTING_ITEMSPRITE_H_
#define ZC_SCRIPTING_ITEMSPRITE_H_

#include "base/ints.h"
#include "zc/ffscript.h"

#include <optional>

class ItemH : public SH
{

public:
	static int32_t loadItem(int32_t uid);
	static int32_t getItemIndex(int32_t uid);
	static item* getItem();
	static void clearTemp();
};

std::optional<int32_t> itemsprite_get_register(int32_t reg);
bool itemsprite_set_register(int32_t reg, int32_t value);
std::optional<int32_t> itemsprite_run_command(word command);

#endif
