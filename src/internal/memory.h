#pragma once
#ifndef INTERNAL_MEMORY_HPP
#define INTERNAL_MEMORY_HPP

class StackMemoryBlock {
public:
	StackMemoryBlock(void* mem, int size);
	void* Alloc(int size);
	void Free();
	void* mem;

private:
	static const int kMaxBlocks = 100;
	int stack_block_pts[kMaxBlocks];
	int stack_blocks;
	int stack_pt;
	int size;
};

#endif