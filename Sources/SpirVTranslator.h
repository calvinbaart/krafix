#pragma once

#include "Translator.h"

namespace krafix {
	class SpirVTranslator : public Translator {
	public:
		SpirVTranslator(std::vector<unsigned>& spirv, EShLanguage stage) : Translator(spirv, stage) {}
		void outputCode(const Target& target, const char* filename, std::map<std::string, int>& attributes);
	private:
		void writeInstructions(const char* filename, std::vector<Instruction>& instructions);
	};
}
