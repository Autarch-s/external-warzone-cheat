#pragma once

namespace offsets
{
	constexpr auto camera_base = 0x14422F80;
	constexpr auto camera_pos = 0x1D8;
	constexpr auto game_mode = 0x0;
	constexpr auto local_index = 0x27540;
	constexpr auto name_array = 0x0;
	constexpr auto name_array_padding = 0x0;
	constexpr auto ref_def_ptr = 0x17226AB0;
	constexpr auto score_base = 0x0;
	constexpr auto weapon_definition = 0x0;
	constexpr auto client_info = 0x17224118;
	constexpr auto client_base = 0x9DB88;

	namespace bones
	{
		constexpr auto bone_base = 0x0;
		constexpr auto distribute = 0x0;
		constexpr auto size = 0x150;
		constexpr auto visible = 0x0;
	}

	namespace directx
	{
		constexpr auto command_queue = 0x0;
		constexpr auto swap_chain = 0x0;
	}

	namespace other
	{
		constexpr auto recoil = 0x0;
	}

	namespace player
	{
		constexpr auto dead_1 = 0x6EC;
		constexpr auto dead_2 = 0x8CC;
		constexpr auto pos_info = 0xEF8;
		constexpr auto size = 0x3A60;
		constexpr auto stance = 0x76C;
		constexpr auto team_id = 0x214;
		constexpr auto valid = 0x30;
		constexpr auto weapon_index = 0x0;
	}
}