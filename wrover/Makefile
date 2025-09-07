# Makefile for ESP32 project experiments

ENV_PATH=/home/akshay/esp32/.venv/bin/activate
SRC_DIR=src
BACKUP_DIR=projects

.PHONY: env
env:
	@echo "Activating Python virtual environment..."
	source $(ENV_PATH)


# Template for other experiments
# Usage: make mv_src_<experiment_name>

mv_src_%:
	@if [ -d $(SRC_DIR)/$* ]; then \
		mv $(SRC_DIR)/$* $(BACKUP_DIR)/$*; \
		echo "Moved $* from src to project."; \
	elif [ -d $(BACKUP_DIR)/$* ]; then \
		mv $(BACKUP_DIR)/$* $(SRC_DIR)/$*; \
		echo "Moved $* from project to src."; \
	else \
		echo "$* folder not found in src or project."; \
	fi
