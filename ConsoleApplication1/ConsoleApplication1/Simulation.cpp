#include "Simulation.hpp"

void Simulation::Draw()
{
	grid.Draw();
}

void Simulation::SetCellvalue(int row, int column, int value)
{
	grid.setValue(row, column, value);
}

int Simulation::CountLiveNEighbours(int row, int column)
{
	int liveNeighbours = 0;
	std::vector<std::pair<int, int>> neighbourOffsets =
	{
		{-1,0},
		{-1,-1},
		{-1,1},
		{1,-1},
		{1,1},
		{1,0},
		{0,-1},
		{0,1},
	};
	for (const auto& offset : neighbourOffsets) {
		int nRow = (row + offset.first + grid.getRows()) % grid.getRows();
		int nColumn = (column + offset.second + grid.getColumns()) % grid.getColumns();
		liveNeighbours += grid.getValue(nRow, nColumn);
	}return liveNeighbours;
}

void Simulation::update()
{
	if (isRunning()){
		for (int row = 0;row < grid.getRows();row++) {
			for (int column = 0;column < grid.getColumns();column++) {
				int liveN = CountLiveNEighbours(row, column);
				int cellV = grid.getValue(row, column);

				if (cellV == 1) {
					if (liveN < 2 || liveN>3) {
						tempGrid.setValue(row, column, 0);
					}
					else {
						tempGrid.setValue(row, column, 1);
					}
				}
				else {
					if (liveN == 3) {
						tempGrid.setValue(row, column, 1);
					}
					else {
						tempGrid.setValue(row, column, 0);
					}
				}
			}
		}
	grid = tempGrid;
	}
}
